REPEAT_KEY_ENABLE = yes

ifeq ($(strip $(KEY_REPEAT_ENABLE)), yes)
  SRC += repeat.c
endif

