output:
	@gcc -w lib/cli/scipp.c -o lib/bins/scipp

run:
	@gcc -w scipp.c -o scipp
	@./scipp
	@rm scipp