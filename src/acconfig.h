/*
 * Define this if you have a /dev/urandom which can supply good random numbers.
 */
#undef HAVE_DEV_URANDOM

/*
 * Define this if you want IPv6 support.
 */
#undef HAVE_IPv6

/*
 * V6 structures that host may or may not be present.
 */
#undef HAVE_ST_ADDRINFO
#undef HAVE_GETIPNODEBYNAME
#undef HAVE_SIN6_LEN

/*
 * Define this if your C library has vsnprintf.
 */
#undef HAVE_VSNPRINTF


/*
 * If you don't have these types in <inttypes.h>, #define these to be
 * the types you do have.
 */
#undef int8_t
#undef int16_t
#undef int32_t
#undef int64_t
#undef uint8_t
#undef uint16_t
#undef uint32_t

/*
 * Debugging:
 * DEBUG: general debugging
 * DEBUG_MEM: debug memory allocation
 */
#undef DEBUG
#undef DEBUG_MEM

/*
 * #defines for operating system.
 * THESE WANT TO GO AWAY!
 * Any checks for a specific OS should be replaced by a check for
 * a feature that OS supports or doesn't support.
 */
#undef SunOS
#undef Solaris
#undef Linux
#undef HPUX

@BOTTOM@

#ifndef WORDS_BIGENDIAN
#define WORDS_SMALLENDIAN
#endif


