#!/bin/bash
set -e # 失败时终止

source_dir=$(cd $(dirname ${0}) && pwd)
build_dir=${source_dir}/build.tmp



echo "source_dir: ${source_dir}"
echo "build_dir: ${build_dir}"

if [ ! -e ${build_dir} ];then
    mkdir ${build_dir}
fi

cd ${build_dir} && cmake ${source_dir} && make -j${nproc}