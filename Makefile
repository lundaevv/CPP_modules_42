MODULE_DIRS := $(sort $(wildcard CPP_*))
PROJECT_DIRS := $(sort $(shell find $(MODULE_DIRS) -type d -mindepth 1 2>/dev/null))
MAKE_DIRS := $(sort $(dir $(wildcard $(addsuffix /Makefile,$(PROJECT_DIRS)))))
MAKE_DIRS := $(patsubst %/,%,$(MAKE_DIRS))

RM := rm -f

.PHONY: all clean fclean re

all:
	@for dir in $(MAKE_DIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	@for dir in $(MAKE_DIRS); do \
		$(MAKE) -C $$dir clean; \
	done
	@find $(MODULE_DIRS) -type f -name '*.o' -delete

fclean: clean
	@for dir in $(MAKE_DIRS); do \
		$(MAKE) -C $$dir fclean; \
	done
	@for dir in $(PROJECT_DIRS); do \
		$(RM) $$dir/$$(basename $$dir); \
	done
	@find $(MODULE_DIRS) -type f -name 'a.out' -delete

re: fclean all
