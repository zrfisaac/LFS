/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sme2_acle.h"

/*
** pext_p2_pn0_0:
**	mov	p([0-9]+)\.b, p0\.b
**	pext	p2\.s, pn\1\[0\]
**	ret
*/
TEST_EXTRACT_PN (pext_p2_pn0_0, svbool_t,
		 p2 = svpext_c32 (pn0, 0),
		 p2 = svpext_c32 (pn0, 0))

/*
** pext_p5_pn7_1:
**	mov	p([0-9]+)\.b, p7\.b
**	pext	p5\.s, pn\1\[1\]
**	ret
*/
TEST_EXTRACT_PN (pext_p5_pn7_1, svbool_t,
		 p5 = svpext_c32 (pn7, 1),
		 p5 = svpext_c32 (pn7, 1))

/*
** pext_p9_pn8_2:
**	pext	p9\.s, pn8\[2\]
**	ret
*/
TEST_EXTRACT_PN (pext_p9_pn8_2, svbool_t,
		 p9 = svpext_c32 (pn8, 2),
		 p9 = svpext_c32 (pn8, 2))

/*
** pext_p12_pn11_3:
**	pext	p12\.s, pn11\[3\]
**	ret
*/
TEST_EXTRACT_PN (pext_p12_pn11_3, svbool_t,
		 p12 = svpext_c32 (pn11, 3),
		 p12 = svpext_c32 (pn11, 3))

/*
** pext_p2_pn15_0:
**	pext	p2\.s, pn15\[0\]
**	ret
*/
TEST_EXTRACT_PN (pext_p2_pn15_0, svbool_t,
		 p2 = svpext_c32 (pn15, 0),
		 p2 = svpext_c32 (pn15, 0))
