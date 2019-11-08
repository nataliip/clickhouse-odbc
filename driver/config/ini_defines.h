#pragma once

#include "driver/platform/platform.h"

#define MAX_DSN_KEY_LEN   256
#define MAX_DSN_VALUE_LEN 10240

#define INI_DRIVER          "Driver"
#define INI_DSN             "DSN"
#define INI_DESC            "Description"     /* Data source description */
#define INI_URL             "Url"             /* Full url of server running the ClickHouse service */
#define INI_PROTOCOL        "Protocol"        /* What protocol (6.2) */
#define INI_SERVER          "Server"          /* Name of Server running the ClickHouse service */
#define INI_PORT            "Port"            /* Port on which the ClickHouse is listening */
#define INI_UID             "UID"             /* Default User Name */
#define INI_USERNAME        "Username"        /* Default User Name */
#define INI_PWD             "PWD"             /* Default Password */
#define INI_PASSWORD        "Password"        /* Default Password */
#define INI_TIMEOUT         "Timeout"         /* Connection timeout */
#define INI_SSLMODE         "SSLMode"         /* Use 'require' for https connections */
#define INI_DATABASE        "Database"        /* Database Name */
#define INI_READONLY        "ReadOnly"        /* Database is read only */
#define INI_STRINGMAXLENGTH "StringMaxLength"
#define INI_DRIVERLOG       "DriverLog"
#define INI_DRIVERLOGFILE   "DriverLogFile"

#define INI_DSN_DEFAULT             "ClickHouseDSN_localhost"
#define INI_DESC_DEFAULT            ""
#define INI_URL_DEFAULT             ""
#define INI_SERVER_DEFAULT          ""
#define INI_PORT_DEFAULT            ""
#define INI_USERNAME_DEFAULT        ""
#define INI_PASSWORD_DEFAULT        ""
#define INI_TIMEOUT_DEFAULT         "30"
#define INI_SSLMODE_DEFAULT         ""
#define INI_DATABASE_DEFAULT        ""
#define INI_READONLY_DEFAULT        ""
#define INI_STRINGMAXLENGTH_DEFAULT "1048575"

#ifdef NDEBUG
#    define INI_DRIVERLOG_DEFAULT "off"
#else
#    define INI_DRIVERLOG_DEFAULT "on"
#endif

#ifdef _win_
#    define INI_DRIVERLOGFILE_DEFAULT "\\temp\\clickhouse-odbc-driver.log"
#else
#    define INI_DRIVERLOGFILE_DEFAULT "/tmp/clickhouse-odbc-driver.log"
#endif

#ifdef _win_
#    define ODBC_INI "ODBC.INI"
#    define ODBCINST_INI "ODBCINST.INI"
#else
#    define ODBC_INI ".odbc.ini"
#    define ODBCINST_INI "odbcinst.ini"
#endif
