# Autoconf requirements
# Initialize, but use more options. Note parameters brackets ans whitespace.
AC_INIT([server], [0.001], [zoo868e@gmail.com])
# Force autoconf to be at least this version number:
AC_PREREQ([2.69])
# Safety check - list a source file that wouldn't be in other directories
AC_CONFIG_SRCDIR([src/server.c], [src/connection_common.c])
# Put configuration results here, so we can easily #inlcude them
AC_CONFIG_HEADER([config.h])
# Put autotools auxiliary files in a subdir, so they don't clutter top dir
AC_CONFIG_AUX_DIR([build-aux])

# Enable "automake" to simplify creating makefiles
AM_INIT_AUTOMAKE([1.11 -Wall -Werror subdir-objects])
AC_CONFIG_FILES([Makefile])
# Look for a C compiler
AC_PROG_CC

# Perhaps check for: (more) programs, libraries, header files, types,
# structures, compiler characteristics, library functions, system services

# Do final output.
AC_OUTPUT
