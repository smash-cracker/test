# Defining variables
set(MUMBLE_OVERLAY_BINARY_BASENAME "mumbleoverlay.x86_64")
set(MUMBLE_BUILD_YEAR "2024")
set(MUMBLE_INSTALL_ABS_LIBDIR "/usr/lib/x86_64-linux-gnu/mumble")

# Configuring files
configure_file("/home/ubuntu20/Downloads/VoIP-software-master/auxiliary_files/run_scripts/mumble-overlay.in" "/home/ubuntu20/Downloads/VoIP-software-master/build/auxiliary_files/mumble-overlay" @ONLY)
