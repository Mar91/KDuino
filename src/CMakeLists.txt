set(kduino_SRCS
   kduino.cpp
   main.cpp
   kduinoview.cpp
 )

kde4_add_ui_files(kduino_SRCS kduinoview_base.ui prefs_base.ui)

kde4_add_kcfg_files(kduino_SRCS settings.kcfgc )

kde4_add_executable(kduino ${kduino_SRCS})

target_link_libraries(kduino ${KDE4_KDEUI_LIBS} )

install(TARGETS kduino ${INSTALL_TARGETS_DEFAULT_ARGS} )


########### install files ###############

install( PROGRAMS kduino.desktop  DESTINATION ${XDG_APPS_INSTALL_DIR} )
install( FILES kduino.kcfg  DESTINATION  ${KCFG_INSTALL_DIR} )
install( FILES kduinoui.rc  DESTINATION  ${DATA_INSTALL_DIR}/kduino )
