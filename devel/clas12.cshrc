#! bin/csh

#setenv JLAB_ROOT /lustre/expphy/work/hallb/clasg12/dlersch/clas12/gemc/opt/jlab_software/
#source $JLAB_ROOT/devel/ce/jlab.csh    

#/lustre/expphy/work/hallb/clasg12/dlersch/clas12/gemc/opt/jlab_software/devel/Linux_CentOS6.5-x86_64-gcc5.2.0/qt/5.6.0

source /site/12gev_phys/production.csh devel
#source /group/clas12/gemc/environment.csh
setenv CLAS12TAG 3a.0.0
setenv GEMC /group/clas12/gemc/$CLAS12TAG/source
setenv GEMC_VERSION $CLAS12TAG
set path = ($GEMC/bin/$OSRELEASE $path)

########################################################################
#  JAVA Environment
########################################################################
#module load java_1.7
#use groovy
########################################################################
# PATHS and Executables
########################################################################
#setenv COATJAVA /group/clas12/packages/coatjava-1.0
setenv COATJAVA /work/clas/clasg12/mkunkel/CLAS12/COATJAVA/coatjava
#setenv PATH /group/clas12/packages/bos:${COATJAVA}/bin:${PATH}
#setenv PATH ${COATJAVA}/bin:${PATH}
#setenv GROOVY_HOME /u/apps/groovy/groovy-2.3.7
#setenv PATH ${GROOVY_HOME}/bin:${PATH}

setenv PLUTO_BUILD /work/clas/clasg12/mkunkel/CLAS12/PLUTO/pluto_v5.42
setenv PLUTO_SRC ${PLUTO_BUILD}/src
setenv PLUTO_LIB ${PLUTO_BUILD}/lib
setenv PLUTO_INC ${PLUTO_BUILD}/src
setenv PLUTO_PLUGINS ${PLUTO_BUILD}/plugins

rehash
