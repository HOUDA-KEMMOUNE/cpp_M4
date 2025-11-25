ADD = git add .
COMMIT = git commit -m "cpp04"
PUSH = git push

all:
	$(ADD) && $(COMMIT) && $(PUSH)