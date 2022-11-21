CMAKE ?= $(shell which cmake)
CTEST ?= $(shell which ctest)


.PHONY:	all
all:	clean		\
	configure	\
	build		\
	test


.PHONY:	clean
clean:


.PHONY:	configure
configure:
	$(CMAKE) -DCMAKE_BUILD_TYPE=MinSizeRel -G 'Ninja' -S . -B 'build'


.PHONY:	build
build:
	$(CMAKE) --build 'build'


.PHONY:	test
test:
	$(CTEST) --output-on-failure --test-dir 'build'
