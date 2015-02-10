/* MIPS register definitions, O32 ABI */
/* See http://en.wikipedia.org/wiki/MIPS_instruction_set#Compiler_register_usage */

#define zero $0
#define at $1 /* assembly temporary */
#define v0 $2 /* function return & expr eval */
#define v1 $3
#define a0 $4 /* function arguments */
#define a1 $5
#define a2 $6
#define a3 $7
#define t0 $8  /* temporary values */
#define t1 $9
#define t2 $10
#define t3 $11
#define t4 $12
#define t5 $13
#define t6 $14
#define t7 $15
#define s0 $16 /* callee-preserved temporary values */
#define s1 $17
#define s2 $18
#define s3 $19
#define s4 $20
#define s5 $21
#define s6 $22
#define s7 $23
#define t8 $24 /* more temporary values */
#define t9 $25
#define k0 $26 /* kernel only */
#define k1 $27
#define gp $28 /* global pointer */
#define sp $29 /* stack pointer */
#define fp $30 /* frame pointer */
#define ra $31 /* return address */

