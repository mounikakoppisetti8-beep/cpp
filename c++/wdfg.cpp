#include <iostream>
#include <sql.h>
#include <sqlext.h>

int main() {
    SQLHENV env;
    SQLHDBC dbc;
    SQLHSTMT stmt;
    SQLRETURN ret;

    // Allocate environment handle
    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &env);
    SQLSetEnvAttr(env, SQL_ATTR_ODBC_VERSION, (void*)SQL_OV_ODBC3, 0);

    // Allocate connection handle
    SQLAllocHandle(SQL_HANDLE_DBC, env, &dbc);

    // Connect to Oracle via ODBC DSN (must configure DSN first)
    ret = SQLConnect(dbc, (SQLCHAR*)"YourDSN", SQL_NTS,
                     (SQLCHAR*)"username", SQL_NTS,
                     (SQLCHAR*)"password", SQL_NTS);

    if (SQL_SUCCEEDED(ret)) {
        std::cout << "? Connected to Oracle!" << std::endl;
    } else {
        std::cout << "? Connection failed." << std::endl;
    }

    // Clean up
    SQLDisconnect(dbc);
    SQLFreeHandle(SQL_HANDLE_DBC, dbc);
    SQLFreeHandle(SQL_HANDLE_ENV, env);

    return 0;
}

