#ifndef RESTAPI1_GLOBAL_H
#define RESTAPI1_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RESTAPI1_LIBRARY)
#  define RESTAPI1_EXPORT Q_DECL_EXPORT
#else
#  define RESTAPI1_EXPORT Q_DECL_IMPORT
#endif

#endif // RESTAPI1_GLOBAL_H
