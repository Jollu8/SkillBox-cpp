#!/bin/bash

# Путь к вашему файлу
FILE="../fibb.h"

# Проверка clang-format
clang-format -i $FILE
#DIFF=$(git diff)
if [ "$DIFF" != "" ]
then
    echo "Код не соответствует clang-format"
    exit 1
fi

# Компиляция с флагом -Werror
g++ -Werror $FILE
if [ $? -ne 0 ]
then
    echo "Обнаружены ошибки компиляции"
    exit 1
fi


