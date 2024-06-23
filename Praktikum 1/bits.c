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

// hatsune_miku_no_geishou
hatsune_miku_no_geishou(int x, int y){
  int sum = x + y;
  int min = 1 << 31;
  int overflow = ((x ^ sum) & (y ^ sum)) >> 31;
  return (overflow & (sum >> 31 ^ min)) | (~overflow & sum);
}

// internet_overdose
int internet_overdose(int i) {
  int a = 0xFF << 8;
  int b = (0xF << 20) | 0xF0;
  int c = (0xC << 24) | (0xC << 16) | (0xC << 8) | 0xC;
  int d = (0x22 << 24) | (0x22 << 16) | (0x22 << 8) | 0x22;

  int t = (i ^ (i >> 8)) & a;
  i = i ^ t ^ (t << 8);
  t = (i ^ (i >> 4)) & b;
  i = i ^ t ^ (t << 4);
  t = (i ^ (i >> 2)) & c;
  i = i ^ t ^ (t << 2);
  t = (i ^ (i >> 1)) & d;
  i = i ^ t ^ (t << 1);
  return i;
  }

//haikei_doppelganger
int haikei_doppelganger(int x){
int c1 = x & 0xff;
int c2 = (x >> 8) & 0xff;
int c3 = (x >> 16) & 0xff;
int c4 = (x >> 24) & 0xff;

int l1 = ~64;
int l2= ~90;
int l3 = ~96;
int l4 = ~122;

int check1 = (((c1+l1)^(c1+l2) | (c1+l3)^(c1+l4)) >> 31) & 1;
int check2 = (((c2+l1)^(c2+l2) | (c2+l3)^(c2+l4)) >> 31) & 1;
int check3 = (((c3+l1)^(c3+l2) | (c3+l3)^(c3+l4)) >> 31) & 1;
int check4 = (((c4+l1)^(c4+l2) | (c4+l3)^(c4+l4)) >> 31) & 1;
return check1 & check2 & check3 & check4;
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

