#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Constantes.o \
	${OBJECTDIR}/HolaMundo.o \
	${OBJECTDIR}/VariablesBoolYChar.o \
	${OBJECTDIR}/OperadoresComparacion.o \
	${OBJECTDIR}/OperadoresBasicos.o \
	${OBJECTDIR}/VariableFloat.o \
	${OBJECTDIR}/VariableDouble.o \
	${OBJECTDIR}/VariablesEnteras.o \
	${OBJECTDIR}/OperadoresLogicos.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/codigofacilito.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/codigofacilito.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/codigofacilito ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/Constantes.o: Constantes.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Constantes.o Constantes.cpp

${OBJECTDIR}/HolaMundo.o: HolaMundo.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/HolaMundo.o HolaMundo.cpp

${OBJECTDIR}/VariablesBoolYChar.o: VariablesBoolYChar.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/VariablesBoolYChar.o VariablesBoolYChar.cpp

${OBJECTDIR}/OperadoresComparacion.o: OperadoresComparacion.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/OperadoresComparacion.o OperadoresComparacion.cpp

${OBJECTDIR}/OperadoresBasicos.o: OperadoresBasicos.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/OperadoresBasicos.o OperadoresBasicos.cpp

${OBJECTDIR}/VariableFloat.o: VariableFloat.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/VariableFloat.o VariableFloat.cpp

${OBJECTDIR}/VariableDouble.o: VariableDouble.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/VariableDouble.o VariableDouble.cpp

${OBJECTDIR}/VariablesEnteras.o: VariablesEnteras.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/VariablesEnteras.o VariablesEnteras.cpp

${OBJECTDIR}/OperadoresLogicos.o: OperadoresLogicos.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/OperadoresLogicos.o OperadoresLogicos.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/codigofacilito.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
