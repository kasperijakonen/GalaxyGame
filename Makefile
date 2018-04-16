#############################################################################
# Makefile for building: GalaxyGame
# Generated by qmake (3.0) (Qt 5.6.2)
# Project:  GalaxyGame.pro
# Template: subdirs
# Command: /usr/bin/qmake-qt5 -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile GalaxyGame.pro
#############################################################################

MAKEFILE      = Makefile

first: make_first
QMAKE         = /usr/bin/qmake-qt5
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = GalaxyGame1.0.0
DISTDIR = /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/.tmp/GalaxyGame1.0.0
SUBTARGETS    =  \
		sub-Student \
		sub-Course \
		sub-CourseTests \
		sub-StudentTests


sub-Student-qmake_all: sub-Course-qmake_all FORCE
	@test -d Student/ || mkdir -p Student/
	cd Student/ && $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Student/Student.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile
	cd Student/ && $(MAKE) -f Makefile qmake_all
sub-Student: sub-Course FORCE
	@test -d Student/ || mkdir -p Student/
	cd Student/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Student/Student.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile
sub-Student-make_first: sub-Course-make_first FORCE
	@test -d Student/ || mkdir -p Student/
	cd Student/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Student/Student.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile 
sub-Student-all: sub-Course-all FORCE
	@test -d Student/ || mkdir -p Student/
	cd Student/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Student/Student.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile all
sub-Student-clean: sub-Course-clean FORCE
	@test -d Student/ || mkdir -p Student/
	cd Student/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Student/Student.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile clean
sub-Student-distclean: sub-Course-distclean FORCE
	@test -d Student/ || mkdir -p Student/
	cd Student/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Student/Student.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile distclean
sub-Student-install_subtargets: sub-Course-install_subtargets FORCE
	@test -d Student/ || mkdir -p Student/
	cd Student/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Student/Student.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile install
sub-Student-uninstall_subtargets: sub-Course-uninstall_subtargets FORCE
	@test -d Student/ || mkdir -p Student/
	cd Student/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Student/Student.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile uninstall
sub-Course-qmake_all:  FORCE
	@test -d Course/ || mkdir -p Course/
	cd Course/ && $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Course/Course.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile
	cd Course/ && $(MAKE) -f Makefile qmake_all
sub-Course: FORCE
	@test -d Course/ || mkdir -p Course/
	cd Course/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Course/Course.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile
sub-Course-make_first: FORCE
	@test -d Course/ || mkdir -p Course/
	cd Course/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Course/Course.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile 
sub-Course-all: FORCE
	@test -d Course/ || mkdir -p Course/
	cd Course/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Course/Course.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile all
sub-Course-clean: FORCE
	@test -d Course/ || mkdir -p Course/
	cd Course/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Course/Course.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile clean
sub-Course-distclean: FORCE
	@test -d Course/ || mkdir -p Course/
	cd Course/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Course/Course.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile distclean
sub-Course-install_subtargets: FORCE
	@test -d Course/ || mkdir -p Course/
	cd Course/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Course/Course.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile install
sub-Course-uninstall_subtargets: FORCE
	@test -d Course/ || mkdir -p Course/
	cd Course/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Course/Course.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile uninstall
sub-CourseTests-qmake_all: sub-Student-qmake_all FORCE
	@test -d CourseTests/ || mkdir -p CourseTests/
	cd CourseTests/ && $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/CourseTests/CourseTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile
	cd CourseTests/ && $(MAKE) -f Makefile qmake_all
sub-CourseTests: sub-Student FORCE
	@test -d CourseTests/ || mkdir -p CourseTests/
	cd CourseTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/CourseTests/CourseTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile
sub-CourseTests-make_first: sub-Student-make_first FORCE
	@test -d CourseTests/ || mkdir -p CourseTests/
	cd CourseTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/CourseTests/CourseTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile 
sub-CourseTests-all: sub-Student-all FORCE
	@test -d CourseTests/ || mkdir -p CourseTests/
	cd CourseTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/CourseTests/CourseTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile all
sub-CourseTests-clean: sub-Student-clean FORCE
	@test -d CourseTests/ || mkdir -p CourseTests/
	cd CourseTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/CourseTests/CourseTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile clean
sub-CourseTests-distclean: sub-Student-distclean FORCE
	@test -d CourseTests/ || mkdir -p CourseTests/
	cd CourseTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/CourseTests/CourseTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile distclean
sub-CourseTests-install_subtargets: sub-Student-install_subtargets FORCE
	@test -d CourseTests/ || mkdir -p CourseTests/
	cd CourseTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/CourseTests/CourseTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile install
sub-CourseTests-uninstall_subtargets: sub-Student-uninstall_subtargets FORCE
	@test -d CourseTests/ || mkdir -p CourseTests/
	cd CourseTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/CourseTests/CourseTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile uninstall
sub-StudentTests-qmake_all: sub-Student-qmake_all FORCE
	@test -d StudentTests/ || mkdir -p StudentTests/
	cd StudentTests/ && $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/StudentTests/StudentTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile
	cd StudentTests/ && $(MAKE) -f Makefile qmake_all
sub-StudentTests: sub-Student FORCE
	@test -d StudentTests/ || mkdir -p StudentTests/
	cd StudentTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/StudentTests/StudentTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile
sub-StudentTests-make_first: sub-Student-make_first FORCE
	@test -d StudentTests/ || mkdir -p StudentTests/
	cd StudentTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/StudentTests/StudentTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile 
sub-StudentTests-all: sub-Student-all FORCE
	@test -d StudentTests/ || mkdir -p StudentTests/
	cd StudentTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/StudentTests/StudentTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile all
sub-StudentTests-clean: sub-Student-clean FORCE
	@test -d StudentTests/ || mkdir -p StudentTests/
	cd StudentTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/StudentTests/StudentTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile clean
sub-StudentTests-distclean: sub-Student-distclean FORCE
	@test -d StudentTests/ || mkdir -p StudentTests/
	cd StudentTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/StudentTests/StudentTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile distclean
sub-StudentTests-install_subtargets: sub-Student-install_subtargets FORCE
	@test -d StudentTests/ || mkdir -p StudentTests/
	cd StudentTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/StudentTests/StudentTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile install
sub-StudentTests-uninstall_subtargets: sub-Student-uninstall_subtargets FORCE
	@test -d StudentTests/ || mkdir -p StudentTests/
	cd StudentTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/StudentTests/StudentTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile uninstall

Makefile: GalaxyGame.pro /usr/lib64/qt5/mkspecs/linux-g++/qmake.conf /usr/lib64/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib64/qt5/mkspecs/common/unix.conf \
		/usr/lib64/qt5/mkspecs/common/linux.conf \
		/usr/lib64/qt5/mkspecs/common/sanitize.conf \
		/usr/lib64/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib64/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib64/qt5/mkspecs/common/g++-base.conf \
		/usr/lib64/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib64/qt5/mkspecs/qconfig.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_declarative.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_declarative_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qml.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qml_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quick.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quick_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_script.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_script_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_scripttools.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_scripttools_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/usr/lib64/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib64/qt5/mkspecs/features/qt_config.prf \
		/usr/lib64/qt5/mkspecs/linux-g++/qmake.conf \
		/usr/lib64/qt5/mkspecs/features/spec_post.prf \
		/usr/lib64/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib64/qt5/mkspecs/features/default_pre.prf \
		/usr/lib64/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib64/qt5/mkspecs/features/default_post.prf \
		/usr/lib64/qt5/mkspecs/features/qml_debug.prf \
		/usr/lib64/qt5/mkspecs/features/warn_on.prf \
		/usr/lib64/qt5/mkspecs/features/file_copies.prf \
		/usr/lib64/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib64/qt5/mkspecs/features/exceptions.prf \
		/usr/lib64/qt5/mkspecs/features/yacc.prf \
		/usr/lib64/qt5/mkspecs/features/lex.prf \
		GalaxyGame.pro
	$(QMAKE) -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile GalaxyGame.pro
/usr/lib64/qt5/mkspecs/features/spec_pre.prf:
/usr/lib64/qt5/mkspecs/common/unix.conf:
/usr/lib64/qt5/mkspecs/common/linux.conf:
/usr/lib64/qt5/mkspecs/common/sanitize.conf:
/usr/lib64/qt5/mkspecs/common/gcc-base.conf:
/usr/lib64/qt5/mkspecs/common/gcc-base-unix.conf:
/usr/lib64/qt5/mkspecs/common/g++-base.conf:
/usr/lib64/qt5/mkspecs/common/g++-unix.conf:
/usr/lib64/qt5/mkspecs/qconfig.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_core.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_declarative.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_declarative_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_gui.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_network.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qml.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qml_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qmldevtools_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quick.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quick_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quickparticles_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_script.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_script_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_scripttools.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_scripttools_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_sql.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_xml.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_xmlpatterns.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
/usr/lib64/qt5/mkspecs/features/qt_functions.prf:
/usr/lib64/qt5/mkspecs/features/qt_config.prf:
/usr/lib64/qt5/mkspecs/linux-g++/qmake.conf:
/usr/lib64/qt5/mkspecs/features/spec_post.prf:
/usr/lib64/qt5/mkspecs/features/exclusive_builds.prf:
/usr/lib64/qt5/mkspecs/features/default_pre.prf:
/usr/lib64/qt5/mkspecs/features/resolve_config.prf:
/usr/lib64/qt5/mkspecs/features/default_post.prf:
/usr/lib64/qt5/mkspecs/features/qml_debug.prf:
/usr/lib64/qt5/mkspecs/features/warn_on.prf:
/usr/lib64/qt5/mkspecs/features/file_copies.prf:
/usr/lib64/qt5/mkspecs/features/testcase_targets.prf:
/usr/lib64/qt5/mkspecs/features/exceptions.prf:
/usr/lib64/qt5/mkspecs/features/yacc.prf:
/usr/lib64/qt5/mkspecs/features/lex.prf:
GalaxyGame.pro:
qmake: FORCE
	@$(QMAKE) -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile GalaxyGame.pro

qmake_all: sub-Student-qmake_all sub-Course-qmake_all sub-CourseTests-qmake_all sub-StudentTests-qmake_all FORCE

make_first: sub-Student-make_first sub-Course-make_first sub-CourseTests-make_first sub-StudentTests-make_first  FORCE
all: sub-Student-all sub-Course-all sub-CourseTests-all sub-StudentTests-all  FORCE
clean: sub-Student-clean sub-Course-clean sub-CourseTests-clean sub-StudentTests-clean  FORCE
distclean: sub-Student-distclean sub-Course-distclean sub-CourseTests-distclean sub-StudentTests-distclean  FORCE
	-$(DEL_FILE) Makefile
install_subtargets: sub-Student-install_subtargets sub-Course-install_subtargets sub-CourseTests-install_subtargets sub-StudentTests-install_subtargets FORCE
uninstall_subtargets: sub-Student-uninstall_subtargets sub-Course-uninstall_subtargets sub-CourseTests-uninstall_subtargets sub-StudentTests-uninstall_subtargets FORCE

sub-Student-check: sub-Course-check
	@test -d Student/ || mkdir -p Student/
	cd Student/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Student/Student.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile check
sub-Course-check:
	@test -d Course/ || mkdir -p Course/
	cd Course/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Course/Course.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile check
sub-CourseTests-check: sub-Student-check
	@test -d CourseTests/ || mkdir -p CourseTests/
	cd CourseTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/CourseTests/CourseTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile check
sub-StudentTests-check: sub-Student-check
	@test -d StudentTests/ || mkdir -p StudentTests/
	cd StudentTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/StudentTests/StudentTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile check
check: sub-Student-check sub-Course-check sub-CourseTests-check sub-StudentTests-check

sub-Student-benchmark: sub-Course-benchmark
	@test -d Student/ || mkdir -p Student/
	cd Student/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Student/Student.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile benchmark
sub-Course-benchmark:
	@test -d Course/ || mkdir -p Course/
	cd Course/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Course/Course.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile benchmark
sub-CourseTests-benchmark: sub-Student-benchmark
	@test -d CourseTests/ || mkdir -p CourseTests/
	cd CourseTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/CourseTests/CourseTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile benchmark
sub-StudentTests-benchmark: sub-Student-benchmark
	@test -d StudentTests/ || mkdir -p StudentTests/
	cd StudentTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/StudentTests/StudentTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -f Makefile benchmark
benchmark: sub-Student-benchmark sub-Course-benchmark sub-CourseTests-benchmark sub-StudentTests-benchmark
install:install_subtargets  FORCE

uninstall: uninstall_subtargets FORCE

FORCE:

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: sub-Student-distdir sub-Course-distdir sub-CourseTests-distdir sub-StudentTests-distdir FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents /usr/lib64/qt5/mkspecs/features/spec_pre.prf /usr/lib64/qt5/mkspecs/common/unix.conf /usr/lib64/qt5/mkspecs/common/linux.conf /usr/lib64/qt5/mkspecs/common/sanitize.conf /usr/lib64/qt5/mkspecs/common/gcc-base.conf /usr/lib64/qt5/mkspecs/common/gcc-base-unix.conf /usr/lib64/qt5/mkspecs/common/g++-base.conf /usr/lib64/qt5/mkspecs/common/g++-unix.conf /usr/lib64/qt5/mkspecs/qconfig.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_core.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_core_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_dbus.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_dbus_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_declarative.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_declarative_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_gui.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_gui_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_network.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_network_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_opengl.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_opengl_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_qml.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_qml_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_qmldevtools_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_quick.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_quick_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_quickparticles_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_script.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_script_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_scripttools.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_scripttools_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_sql.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_sql_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_testlib.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_testlib_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_widgets.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_widgets_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_xml.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_xml_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_xmlpatterns.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_xmlpatterns_private.pri /usr/lib64/qt5/mkspecs/features/qt_functions.prf /usr/lib64/qt5/mkspecs/features/qt_config.prf /usr/lib64/qt5/mkspecs/linux-g++/qmake.conf /usr/lib64/qt5/mkspecs/features/spec_post.prf /usr/lib64/qt5/mkspecs/features/exclusive_builds.prf /usr/lib64/qt5/mkspecs/features/default_pre.prf /usr/lib64/qt5/mkspecs/features/resolve_config.prf /usr/lib64/qt5/mkspecs/features/default_post.prf /usr/lib64/qt5/mkspecs/features/qml_debug.prf /usr/lib64/qt5/mkspecs/features/warn_on.prf /usr/lib64/qt5/mkspecs/features/file_copies.prf /usr/lib64/qt5/mkspecs/features/testcase_targets.prf /usr/lib64/qt5/mkspecs/features/exceptions.prf /usr/lib64/qt5/mkspecs/features/yacc.prf /usr/lib64/qt5/mkspecs/features/lex.prf GalaxyGame.pro $(DISTDIR)/

sub-Student-distdir: FORCE
	@test -d Student/ || mkdir -p Student/
	cd Student/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Student/Student.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -e -f Makefile distdir DISTDIR=$(DISTDIR)/Student

sub-Course-distdir: FORCE
	@test -d Course/ || mkdir -p Course/
	cd Course/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/Course/Course.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -e -f Makefile distdir DISTDIR=$(DISTDIR)/Course

sub-CourseTests-distdir: FORCE
	@test -d CourseTests/ || mkdir -p CourseTests/
	cd CourseTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/CourseTests/CourseTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -e -f Makefile distdir DISTDIR=$(DISTDIR)/CourseTests

sub-StudentTests-distdir: FORCE
	@test -d StudentTests/ || mkdir -p StudentTests/
	cd StudentTests/ && ( test -e Makefile || $(QMAKE) /home/jakonenk/lansi-porin-lahioradio/GalaxyGame/StudentTests/StudentTests.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile ) && $(MAKE) -e -f Makefile distdir DISTDIR=$(DISTDIR)/StudentTests
