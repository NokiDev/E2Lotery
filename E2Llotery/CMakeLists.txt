
add_executable(E2Llotery
        main.cpp
        E2Lotery.cpp include/E2Lotery.h

        #resources
        Assets/E2Llotery.qrc
)

target_link_libraries(E2Llotery Qt5::Core Qt5::Gui Qt5::Qml Qt5::Quick Qt5::Widgets)
target_include_directories(E2Llotery
        PUBLIC
            $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
            $<INSTALL_INTERFACE:include>
)