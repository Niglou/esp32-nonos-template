
esp32-nonos:= /media/DATA/Espressif_project/esp32-nonos

build :
	@$(MAKE) --directory=$(esp32-nonos) build `pwd`
