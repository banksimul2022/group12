#ifndef DLL_SERIALPORT_GLOBAL_H
#define DLL_SERIALPORT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLL_SERIALPORT_LIBRARY)     //määritellään ddl
#  define DLL_SERIALPORT_EXPORT Q_DECL_EXPORT //voimassa ddl
#else
#  define DLL_SERIALPORT_EXPORT Q_DECL_IMPORT  //voimassa exe
#endif

#endif // DLL_SERIALPORT_GLOBAL_H
