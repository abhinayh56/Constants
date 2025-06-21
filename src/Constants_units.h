#ifndef CONSTANTS_UNITS_H
#define CONSTANTS_UNITS_H

// multiplicative conversion constants
// length
#define IN_2_M(x)      (x*0.0254)                                 // from inches to meters
#define M_2_IN(x)      (x*39.370078740157480314960629921259843)   // from meters to inches
#define M_2_FT(x)      (x*3.2808398950131233595800524934383202)   // from meters to feet
#define FT_2_M(x)      (x*0.3048)                                 // from feet to meters
/*
meter
thou / mil
inch
foot
yard
mile
league
fathom
nautical_mile
*/

// mass
/*
kg
pound
lunces
tonnes
*/

// time
/*
*/
#define SEC_2_NS(x)   (x*1000000000)
#define SEC_2_US(x)   (x*1000000)
#define SEC_2_MS(x)   (x*1000)
#define MS_2_SEC(x)   (x*0.001)
#define US_2_SEC(x)   (x*0.000001)
#define NS_2_SEC(x)   (x*0.000000001)
#define MIN_2_SEC(x)  (x*60)
#define HR_2_SEC(x)   (x*3600)
#define HR_2_MIN(x)   (x*60)
#define DAYS_2_HR(x)  (x*24)
#define DAYS_2_MIN(x) (x*1440)
#define DAYS_2_SEC(x) (x*86400)

// current

// temperature

// luminous intensity

// angle
#define RAD_2_DEG(x)   (x*57.295779513082322864647721871733665)   // from radians to degrees
#define DEG_2_RAD(x)   (x*0.017453292519943295769236907684886127) // from degrees to radians
#define RPM_2_RADPS(x) (x*0.10471975511965977461542144610932)     // from rpm to radian per second
#define RPM_2_DEGPS(x) (x*6)                                      // from rpm to degree per second
#define RADPS_2_RPM(x) (x*9.5492965855137201461330258023509)      // from radian per second to rpm
#define DEGPS_2_RPM(x) (x*0.16666666666666666666666666666667)     // from degree per second to rpm


// Decimal prefix Specific units of IEC 60027-2 A.2 and ISO/IEC 80000:13-2008
#define QUETTA  1e30
#define RONNA   1e27
#define YOTTA   1e24
#define ZETTA   1e21
#define EXA     1e18
#define PETA    1e15
#define TERA    1e12
#define GIGA    1e9
#define MEGA    1e6
#define KILO    1e3
#define HECTO   1e2
#define DEKA    1e1
#define DECI    1e-1
#define CENTI   1e-2
#define MILLI   1e-3
#define MICRO   1e-6
#define NANO    1e-9
#define PICO    1e-12
#define FEMTO   1e-15
#define ATTO    1e-18
#define ZEPTO   1e-21
#define YOCTO   1e-24
#define RONTO   1e-27
#define QUECTO  1e-30

// Binary prefix Specific units of IEC 60027-2 A.2 and ISO/IEC 80000:13-2008
#define KIBI  (1 << 10)
#define MEBI  (1 << 20)
#define GIBI  (1 << 30)
#define TEBI  (1 << 40)
#define PEBI  (1 << 50)
#define EXBI  (1 << 60)
#define ZEBI  (1 << 70)
#define YOBI  (1 << 80)

#endif