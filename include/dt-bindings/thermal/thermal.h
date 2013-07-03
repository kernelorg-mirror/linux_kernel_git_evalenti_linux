/*
 * This header provides constants for most thermal bindings.
 *
 * Copyright (C) 2013 Texas Instruments
 *	Eduardo Valentin <eduardo.valentin@ti.com>
 *
 * GPLv2 only
 */

#ifndef _DT_BINDINGS_THERMAL_THERMAL_H
#define _DT_BINDINGS_THERMAL_THERMAL_H

/*
 * Here are the thermal trip types. This must
 * match with enum thermal_trip_type at
 * include/linux/thermal.h
 */
#define THERMAL_TRIP_ACTIVE		"active"
#define THERMAL_TRIP_PASSIVE		"passive"
#define THERMAL_TRIP_HOT		"hot"
#define THERMAL_TRIP_CRITICAL		"critical"

/* On cooling devices upper and lower limits */
#define THERMAL_NO_LIMIT		(-1UL)

#endif

