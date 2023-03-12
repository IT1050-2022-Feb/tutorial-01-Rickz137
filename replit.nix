{ pkgs }: {
	deps = [
		pkgs.pmd
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}