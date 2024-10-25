let my_config = HEMTT_VFS
    .join("addons")
    .join("main")
    .join("config.cpp").open_file().read();
print(my_config)