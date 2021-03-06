// Big Mod / Modular Exponentiation
// (computes (a^k) mod p in O(log(k)) time)

ll modExpo(ll a, ll exp, ll mod) { 
  ll res = 1;
  a = a % mod; // Update x if it is more than or equal to p 
  while (exp) {
    // If y is odd, multiply x with result 
    if (exp & 1) res = (res*a) % mod; 
    // y must be even now 
    exp = exp >> 1; // y = y/2 
    a = (a*a) % mod;  
  } 
  return res; 
}

// modInverse(a, MOD) => modExpo(a, MOD-2, MOD)
