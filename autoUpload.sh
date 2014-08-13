#!/bin/bash - 
#===============================================================================
#
#          FILE:  autoUpload.sh
# 
#         USAGE:  ./autoUpload.sh 
# 
#   DESCRIPTION:  autoupload source
# 
#       OPTIONS:  ---
#  REQUIREMENTS:  ---
#          BUGS:  ---
#         NOTES:  ---
#        AUTHOR: YOUR NAME (), 
#       COMPANY: 
#       CREATED: 13/08/14 23:01:39 CST
#      REVISION:  ---
#===============================================================================

set -o nounset                              # Treat unset variables as an error

git add .
git commit -a -m "upload"
git push
