# Defining variables
set(MUMBLE_CLIENT_BINARY_NAME "mumble")
set(MUMBLE_BUILD_YEAR "2024")
set(CMAKE_PROJECT_VERSION "1.6.0")
set(BUILD_RELEASE_DATE "2024-09-19")
set(CMAKE_PROJECT_HOMEPAGE_URL "https://www.mumble.info")
set(CMAKE_PROJECT_DESCRIPTION "Open source, low-latency, high quality voice chat.")

# Configuring files
configure_file("/home/ubuntu20/Downloads/VoIP-software-master/auxiliary_files/config_files/info.mumble.Mumble.appdata.xml.in" "/home/ubuntu20/Downloads/VoIP-software-master/build/auxiliary_files/info.mumble.Mumble.appdata.xml" @ONLY)
configure_file("/home/ubuntu20/Downloads/VoIP-software-master/auxiliary_files/config_files/info.mumble.Mumble.desktop.in" "/home/ubuntu20/Downloads/VoIP-software-master/build/auxiliary_files/info.mumble.Mumble.desktop" @ONLY)
