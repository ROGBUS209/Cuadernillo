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
	${OBJECTDIR}/ApuntadorA.o \
	${OBJECTDIR}/ApuntadorB.o \
	${OBJECTDIR}/ApuntadorC.o \
	${OBJECTDIR}/ApuntadorD.o \
	${OBJECTDIR}/ApuntadorE.o \
	${OBJECTDIR}/ArreglosA.o \
	${OBJECTDIR}/ArreglosB.o \
	${OBJECTDIR}/ArreglosC.o \
	${OBJECTDIR}/ArreglosD.o \
	${OBJECTDIR}/ArreglosE.o \
	${OBJECTDIR}/Control.o \
	${OBJECTDIR}/ControlB.o \
	${OBJECTDIR}/ControlC.o \
	${OBJECTDIR}/ControlD.o \
	${OBJECTDIR}/ControlF.o \
	${OBJECTDIR}/Decision.o \
	${OBJECTDIR}/DecisionB.o \
	${OBJECTDIR}/DecisionC.o \
	${OBJECTDIR}/Decisión\ 1.o \
	${OBJECTDIR}/FuncionesA.o \
	${OBJECTDIR}/FuncionesB.o \
	${OBJECTDIR}/FuncionesC.o \
	${OBJECTDIR}/FuncionesD.o \
	${OBJECTDIR}/FuncionesE.o \
	${OBJECTDIR}/decisiones.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cuadernillo.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cuadernillo.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cuadernillo ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/ApuntadorA.o: ApuntadorA.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ApuntadorA.o ApuntadorA.c

${OBJECTDIR}/ApuntadorB.o: ApuntadorB.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ApuntadorB.o ApuntadorB.c

${OBJECTDIR}/ApuntadorC.o: ApuntadorC.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ApuntadorC.o ApuntadorC.c

${OBJECTDIR}/ApuntadorD.o: ApuntadorD.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ApuntadorD.o ApuntadorD.c

${OBJECTDIR}/ApuntadorE.o: ApuntadorE.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ApuntadorE.o ApuntadorE.c

${OBJECTDIR}/ArreglosA.o: ArreglosA.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ArreglosA.o ArreglosA.c

${OBJECTDIR}/ArreglosB.o: ArreglosB.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ArreglosB.o ArreglosB.c

${OBJECTDIR}/ArreglosC.o: ArreglosC.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ArreglosC.o ArreglosC.c

${OBJECTDIR}/ArreglosD.o: ArreglosD.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ArreglosD.o ArreglosD.c

${OBJECTDIR}/ArreglosE.o: ArreglosE.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ArreglosE.o ArreglosE.c

${OBJECTDIR}/Control.o: Control.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Control.o Control.c

${OBJECTDIR}/ControlB.o: ControlB.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ControlB.o ControlB.c

${OBJECTDIR}/ControlC.o: ControlC.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ControlC.o ControlC.c

${OBJECTDIR}/ControlD.o: ControlD.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ControlD.o ControlD.c

${OBJECTDIR}/ControlF.o: ControlF.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ControlF.o ControlF.c

${OBJECTDIR}/Decision.o: Decision.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Decision.o Decision.c

${OBJECTDIR}/DecisionB.o: DecisionB.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DecisionB.o DecisionB.c

${OBJECTDIR}/DecisionC.o: DecisionC.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DecisionC.o DecisionC.c

.NO_PARALLEL:${OBJECTDIR}/Decisión\ 1.o
${OBJECTDIR}/Decisión\ 1.o: Decisión\ 1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Decisión\ 1.o Decisión\ 1.c

${OBJECTDIR}/FuncionesA.o: FuncionesA.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FuncionesA.o FuncionesA.c

${OBJECTDIR}/FuncionesB.o: FuncionesB.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FuncionesB.o FuncionesB.c

${OBJECTDIR}/FuncionesC.o: FuncionesC.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FuncionesC.o FuncionesC.c

${OBJECTDIR}/FuncionesD.o: FuncionesD.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FuncionesD.o FuncionesD.c

${OBJECTDIR}/FuncionesE.o: FuncionesE.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FuncionesE.o FuncionesE.c

${OBJECTDIR}/decisiones.o: decisiones.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/decisiones.o decisiones.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
