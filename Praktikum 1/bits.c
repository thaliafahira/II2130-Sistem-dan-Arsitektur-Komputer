// sharuru
int sharuru(int x, int y){
    return ((x & 0x0F) | (y & 0xF0));
}

// vampire
int vampire(int x, int y){
    int notx = ~x;
    int noty = ~y;
    int bitand = notx & noty;
    int result = ~bitand;
    return result;
}

// aidoru_shinetai
int aidoru_shinetai(int a){
    return (((a & 0x1) << 3) | (a & 0x4) | (a & 0x2) | ((a >> 3) & 0x1));
}

// bitter_choco_decoration
int bitter_choco_decoration(int x){
    return ((x << 4) + (x << 2) + (x << 1) + x);
}

// ghost_rule
int ghost_rule(int n) {
    return (~((n + ~0) >> 31) & 1) & ((((n & (n + ~0)) + ~0) >> 31) & 1);
}

// hibana
int hibana(int a, int b, int c){
    int x = (a + (~b + 1)) >> 31;
    int z =  (x & b) | (~x & a);
    int q = (z + (~c + 1)) >> 31;
    return ((q & c) | (~q & z));
}

// oshama_scramble
/* 
 * float_f2i - Return bit-level equivalent of expression (int) f
 *   for floating point argument f.
 *   Argument is passed as unsigned int, but
 *   it is to be interpreted as the bit-level representation of a
 *   single-precision floating point value.
 *   Anything out of range (including NaN and infinity) should return
 *   0x80000000u.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
int oshama_scramble(unsigned uf) {
  unsigned sign = uf >> 31;
  unsigned exp = (uf >> 23) & 0xFF;
  unsigned frac =(uf & 0x7FFFFF);
  unsigned bias = 0x7F;
  unsigned res = frac;
  
  if (exp == 0xFF) 
  {
    return 0x80000000u;
  } 
  
  if (exp < bias) 
  {
    return 0x0;
  }
  
  exp -= bias;
  
  if (exp >= 31) 
  {
    return 0x80000000u;
  } 
  
  if (exp > 22) 
  {
    res = frac << (exp - 23);
  } 
  else 
  {
    res = frac >> (23 - exp);
  }

  res += 1 << exp;
  
  if (sign) {
    res = -res;
  }
  
  return res;
}





// ------------------------------------------------------------------------------------------------------------------------------------------------- //

/* 
 * bitXor - x^y using only ~ and & 
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 */
int bitXor(int x, int y) {
  return (~(x & y)) & (~((~x) & (~y)));
}

