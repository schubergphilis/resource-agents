/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.scalar.conf,v 1.7 2003/04/08 14:57:04 dts12 Exp $
 */

#ifndef clusterMonitorSnmp_h
#define clusterMonitorSnmp_h

#include "ClusterMonitor.h"

extern ClusterMonitoring::ClusterMonitor monitor;


// called by snmpd
extern "C" void init_redhatClusterMIB(void);

#endif  /* clusterMonitorSnmp_h */
