.PHONY: clean run

# 定义包含子目录的变量
SUBDIRS = Queue/Queue_dyn Queue/Queue_static Stack/Stack_dyn Stack/Stack_static Vector LinkList

# 处理参数传递
TARGET_DIR := $(word 2, $(MAKECMDGOALS))

# 默认目标
.DEFAULT_GOAL := help

run:
	@if [ -z "$(TARGET_DIR)" ]; then \
		echo "请指定目标目录，例如: make run Vector"; \
		exit 1; \
	fi
	@if echo "$(SUBDIRS)" | grep -q "$(TARGET_DIR)"; then \
		$(MAKE) -C $(TARGET_DIR); \
	else \
		echo "指定的目标目录 $(TARGET_DIR) 不存在"; \
		exit 1; \
	fi

clean: 
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done

help:
	@echo "用法:"
	@echo "  make run <目录>  # 运行指定目录下的 Makefile"
	@echo "  make clean       # 清理所有子目录"
