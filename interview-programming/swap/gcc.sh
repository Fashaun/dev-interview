#!/bin/bash - 
#===============================================================================
#
#          FILE: gcc.sh
# 
#         USAGE: ./gcc.sh 
# 
#   DESCRIPTION: 
# 
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: YOUR NAME (), 
#  ORGANIZATION: 
#       CREATED: 12/20/2016 21:19
#      REVISION:  ---
#===============================================================================

set -o nounset                              # Treat unset variables as an error

gcc -o $2 $1 -I . -L .

