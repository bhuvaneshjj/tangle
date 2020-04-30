/*
 * Copyright (C) 2020 BiiLabs Co., Ltd. and Contributors
 * All Rights Reserved.
 * This is free software; you can redistribute it and/or modify it under the
 * terms of the MIT license. A copy of the license can be found in the file
 * "LICENSE" at the root of this distribution.
 */

#include "ta_fetch_txn_with_uuid.h"

ta_fetch_txn_with_uuid_res_t* ta_fetch_txn_with_uuid_res_new() {
  ta_fetch_txn_with_uuid_res_t* res = (ta_fetch_txn_with_uuid_res_t*)malloc(sizeof(ta_fetch_txn_with_uuid_res_t));
  res->txn = NULL;
  res->status = NOT_EXIST;
  return res;
}

void ta_fetch_txn_with_uuid_res_free(ta_fetch_txn_with_uuid_res_t** res) {
  if (!res || !(*res)) {
    return;
  }

  free((*res)->txn);
  free(*res);
  *res = NULL;
}