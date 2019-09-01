build_carp:
	cd src && carp -b --generate-only main.carp

clean_carp:
	rm -rf src/out

build_platform:
	platformio run --target debug

clean_platform:
	platformio run --target clean

upload: build_carp
	platformio run --target upload

build: build_carp build_platform

clean: clean_carp clean_platform

monitor:
	platformio run --target monitor

