import os

for archivos in os.listdir("."):
	if archivos.endswith(".c"):
		print(archivos)