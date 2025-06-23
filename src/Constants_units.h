#ifndef CONSTANTS_UNITS_H
#define CONSTANTS_UNITS_H

// multiplicative conversion constants
// length
#define THOUGH_2_INCH(x)  (x * 0.001)
#define MIL_2_INCH(x)     (x * 0.001)
#define IN_2_CM(x)        (x * 2.54)
#define IN_2_M(x)         (x * 0.0254)
#define M_2_IN(x)         (x * 39.370078740157480314960629921259843)
#define FT_2_IN(x)        (x * 12.0)
#define FT_2_M(x)         (x * 0.3048)
#define M_2_FT(x)         (x * 3.2808398950131233595800524934383202)
#define YARD_2_FT(x)      (x * 3.0)
#define YARD_2_M(x)       (x * 0.9144)
#define FT_2_YARD(x)      (x / 3.0)
#define MILE_2_FEET(x)    (x * 5280)
#define MILE_2_YARD(x)    (x * 1760)
#define MILE_2_M(x)       (x * 1609.344)
#define M_2_MILE(x)       (x / 1609.344)
#define LEAGUE_2_MILE(x)  (x * 3.0)
#define LEAGUE_2_M(x)     (x * 4800.0)
#define FATHOM_2_YARD(x)  (x * 2.0)
#define FATHOM_2_M(x)     (x * 1.8288)
#define NAUT_MILE_2_M(x)  (x * 1852.0)

// mass
#define TN_2_KG(x)     (x * 1000.0)
#define LB_2_KG(x)     (x * 0.45359237)
#define KG_2_LB(x)     (x / 0.45359237)
#define LB_2_OUNCE(x)  (x * 0.0625)
#define OUNCE_2_LB(x)  (x * 16.0)
#define OUNCE_2_KG(x)  (x * 0.028349523125)
#define KG_2_OUNCE(x)  (x * 35.273961949580412915675808215204)

// time
#define SEC_2_NS(x)    (x * 1000000000.0)
#define SEC_2_US(x)    (x * 1000000.0)
#define SEC_2_MS(x)    (x * 1000.0)
#define MS_2_SEC(x)    (x * 0.001)
#define US_2_SEC(x)    (x * 0.000001)
#define NS_2_SEC(x)    (x * 0.000000001)
#define MIN_2_SEC(x)   (x * 60.0)
#define HR_2_SEC(x)    (x * 3600.0)
#define HR_2_MIN(x)    (x * 60.0)
#define DAYS_2_HR(x)   (x * 24.0)
#define DAYS_2_MIN(x)  (x * 1440.0)
#define DAYS_2_SEC(x)  (x * 86400.0)

// temperature
#define C_2_F(x)  (1.8 * x + 32.0)
#define C_2_K(x)  (x + 273.15)
#define C_2_R(x)  (0.8 * x)
#define F_2_C(x)  ((x - 32.0) / 1.8)
#define F_2_K(x)  ((x - 32.0) / 1.8 + 273.15)
#define F_2_R(x)  ((x - 32.0) / 2.25)
#define K_2_C(x)  (x - 273.15)
#define K_2_F(x)  (1.8 * x - 459.67)
#define K_2_R(x)  (0.8 * x - 218.52)
#define R_2_C(x)  (1.25 * x)
#define R_2_F(x)  (2.25 * x + 32.0)
#define R_2_K(x)  (1.25 * x + 273.15)

// angle
#define RAD_2_DEG(x)       (x * 57.295779513082322864647721871733665)
#define DEG_2_RAD(x)       (x * 0.017453292519943295769236907684886127)
#define DEG_2_MINUT(x)     (x * 60.0)
#define DEG_2_SECOND(x)    (x * 3600.0)
#define MINUT_2_SECOND(x)  (x * 60.0)
#define MINUT_2_DEG(x)     (x / 60.0)
#define SECOND_2_MINUT(x)  (x / 60.0)
#define SECOND_2_DEG(x)    (x / 3600.0)

// speed
#define RPM_2_RADPS(x)    (x * 0.10471975511965977461542144610932)
#define RPM_2_DEGPS(x)    (x * 6.0)
#define RADPS_2_RPM(x)    (x * 9.5492965855137201461330258023509)
#define RADPS_2_DEGPS(x)  (x * 57.295779513082322864647721871733665)
#define DEGPS_2_RPM(x)    (x * 0.16666666666666666666666666666667)
#define DEGPS_2_RADPS(x)  (x * 0.017453292519943295769236907684886127)

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

#endif // CONSTANTS_UNITS_H
