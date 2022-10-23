
.PHONY: build
build:
	mkdir -p dist
	g++ -Wall -Wextra -pedantic-errors -O3 -std=gnu++2a -o dist/app src/project_fun.cpp src/project.cpp

.PHONY: test
test:
	mkdir -p dist
	g++  -Wall -Wextra -pedantic-errors -std=gnu++2a -o dist/test src/project_fun.cpp test/test.cpp
	dist/test

.PHONY: clean
clean:
	rm -rf dist
