#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x5_t test_vlseg5e64ff_v_f64m1x5_tu(vfloat64m1x5_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint64m1x5_t test_vlseg5e64ff_v_i64m1x5_tu(vint64m1x5_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint64m1x5_t test_vlseg5e64ff_v_u64m1x5_tu(vuint64m1x5_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat64m1x5_t test_vlseg5e64ff_v_f64m1x5_tum(vbool64_t mask, vfloat64m1x5_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m1x5_t test_vlseg5e64ff_v_i64m1x5_tum(vbool64_t mask, vint64m1x5_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m1x5_t test_vlseg5e64ff_v_u64m1x5_tum(vbool64_t mask, vuint64m1x5_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m1x5_t test_vlseg5e64ff_v_f64m1x5_tumu(vbool64_t mask, vfloat64m1x5_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m1x5_t test_vlseg5e64ff_v_i64m1x5_tumu(vbool64_t mask, vint64m1x5_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m1x5_t test_vlseg5e64ff_v_u64m1x5_tumu(vbool64_t mask, vuint64m1x5_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m1x5_t test_vlseg5e64ff_v_f64m1x5_mu(vbool64_t mask, vfloat64m1x5_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m1x5_t test_vlseg5e64ff_v_i64m1x5_mu(vbool64_t mask, vint64m1x5_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m1x5_t test_vlseg5e64ff_v_u64m1x5_mu(vbool64_t mask, vuint64m1x5_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}
