/*
 * include/asm-v850/flat.h -- uClinux flat-format executables
 *
 *  Copyright (C) 2002,03  NEC Electronics Corporation
 *  Copyright (C) 2002,03  Miles Bader <miles@gnu.org>
 *
 * This file is subject to the terms and conditions of the GNU General
 * Public License.  See the file COPYING in the main directory of this
 * archive for more details.
 *
 * Written by Miles Bader <miles@gnu.org>
 */

#ifndef __V850_FLAT_H__
#define __V850_FLAT_H__

/* The amount by which a relocation can exceed the program image limits
   without being regarded as an error.  On the v850, the relocations of
   some base-pointers can be offset by 0x8000 (to allow better usage of the
   space offered by 16-bit signed offsets -- in most cases the offsets used
   with such a base-pointer will be negative).  */

#define	flat_reloc_valid(reloc, size)	((reloc) < (size + 0x8000))

#define	flat_stack_align(sp)		/* nothing needed */
#define	flat_argvp_envp_on_stack()	0
#define	flat_old_ram_flag(flags)	(flags)

/* Convert a relocation entry into an address.  */
static inline unsigned long
flat_get_relocate_addr (unsigned long relval)
{
	return relval & 0x7fffffff; /* Mask out top bit */
}

/* Extract the address to be relocated from the symbol reference at RP;
   RELVAL is the raw relocation-table entry from which RP is derived.
   For the v850, RP should always be half-word aligned.  */
static inline unsigned long flat_get_addr_from_rp (unsigned long *rp,
						   unsigned long relval)
{
	short *srp = (short *)rp;
	if (relval & 0x80000000)
		/* The high and low halves of the address are in the upper 16
		   bits of the 32-bit instruction at RP, and the upper 15 bits
		   of the instruction following that, respectively.  The low
		   half is _signed_ so we have to sign-extend it and add it to
		   the upper half instead of simply or-ing them together.  The
		   lowest bit is always zero.

		   Unlike most relocated address, this one is stored in
		   native (little-endian) byte-order to avoid problems
		   with trashing the low-order bit, so we have to convert
		   to network-byte-order before returning, as that's what
		   the caller expects.  */
		return htonl ((srp[0] << 16) + (srp[2] & ~0x1));
	else
		/* Simple 32-bit address.  */
		return srp[0] | (srp[1] << 16);
}

/* Insert the address ADDR into the symbol reference at RP;
   RELVAL is the raw relocation-table entry from which RP is derived.
   For the v850, RP should always be half-word aligned.  */
static inline void flat_put_addr_at_rp (unsigned long *rp, unsigned long addr,
					unsigned long relval)
{
	short *srp = (short *)rp;
	if (relval & 0x80000000) {
		/* The high and low halves of the address are in the 16
		   bits at RP, and the upper 15 bits of the 2nd word of the
		   32-bit instruction following that, respectively.  The
		   low half is _signed_ so we must carry its sign bit to
		   the upper half before writing the upper half.  The
		   lowest bit we preserve from the existing instruction.  */
		srp[0] = (addr >> 16) + ((addr & 0xFFFF) >> 15);
		srp[2] = (addr & 0xFFFE) | (srp[2] & 0x1);
	} else {
		/* Simple 32-bit address.  */
		srp[0] = addr & 0xFFFF;
		srp[1] = (addr >> 16);
	}
}

#endif /* __V850_FLAT_H__ */
