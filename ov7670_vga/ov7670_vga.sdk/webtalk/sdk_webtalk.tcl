webtalk_init -webtalk_dir /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ov7670_vga/ov7670_vga.sdk/webtalk
webtalk_register_client -client project
webtalk_add_data -client project -key date_generated -value "Sat Apr 27 17:53:17 2019" -context "software_version_and_target_device"
webtalk_add_data -client project -key product_version -value "SDK v2015.4" -context "software_version_and_target_device"
webtalk_add_data -client project -key build_version -value "2015.4" -context "software_version_and_target_device"
webtalk_add_data -client project -key os_platform -value "amd64" -context "software_version_and_target_device"
webtalk_add_data -client project -key registration_id -value "" -context "software_version_and_target_device"
webtalk_add_data -client project -key tool_flow -value "SDK" -context "software_version_and_target_device"
webtalk_add_data -client project -key beta -value "false" -context "software_version_and_target_device"
webtalk_add_data -client project -key route_design -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_family -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_device -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_package -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_speed -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key random_id -value "7p20eot2s5i9d55tq0j8gi8tbd" -context "software_version_and_target_device"
webtalk_add_data -client project -key project_id -value "2015.4_1" -context "software_version_and_target_device"
webtalk_add_data -client project -key project_iteration -value "1" -context "software_version_and_target_device"
webtalk_add_data -client project -key os_name -value "" -context "user_environment"
webtalk_add_data -client project -key os_release -value "" -context "user_environment"
webtalk_add_data -client project -key cpu_name -value "" -context "user_environment"
webtalk_add_data -client project -key cpu_speed -value "" -context "user_environment"
webtalk_add_data -client project -key total_processors -value "" -context "user_environment"
webtalk_add_data -client project -key system_ram -value "" -context "user_environment"
webtalk_register_client -client sdk
webtalk_add_data -client sdk -key uid -value "1556277578000" -context "sdk\\\\application/1556277578000"
webtalk_add_data -client sdk -key os -value "linux" -context "sdk\\\\application/1556277578000"
webtalk_add_data -client sdk -key apptemplate -value "linux_hello_world" -context "sdk\\\\application/1556277578000"
webtalk_transmit -clientid 656182612 -regid "" -xml /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ov7670_vga/ov7670_vga.sdk/webtalk/usage_statistics_ext_sdk.xml -html /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ov7670_vga/ov7670_vga.sdk/webtalk/usage_statistics_ext_sdk.html -wdm /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ov7670_vga/ov7670_vga.sdk/webtalk/sdk_webtalk.wdm -intro "<H3>SDK Usage Report</H3><BR>"
webtalk_terminate
