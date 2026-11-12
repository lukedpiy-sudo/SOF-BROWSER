// rea decompile_all
// name: FUN_500b1670
// address: 0x500b1670
// body: available
// range: 0x500b1670-0x500b186a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500b1670(float param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < *(int *)((int)param_1 + 0x2ec)) {
    if ((*(byte *)((int)param_1 + 0x1a0) & 2) == 0) {
      if (*(int *)((int)param_1 + 0x38c) < 3) {
        *(float *)((int)param_1 + 0x2a0) = DAT_5015ccdc + 12.0;
        goto LAB_500b175a;
      }
    }
    else if (0 < *(int *)((int)param_1 + 0x38c)) {
      *(float *)((int)param_1 + 0x2a0) = DAT_5015ccdc + 9.0;
      goto LAB_500b175a;
    }
    if ((*(float *)((int)param_1 + 0x2a0) < DAT_5015ccdc) &&
       (*(float *)((int)param_1 + 0x2dc) < DAT_5015ccdc)) {
      FUN_5010777b((double)(DAT_5015ccdc - *(float *)((int)param_1 + 0x2a0)));
      lVar2 = __ftol();
      iVar1 = (int)lVar2;
      if (0xf < iVar1) {
        iVar1 = 0xf;
      }
      FUN_5008bb10(param_1,DAT_5015cca0,(float)DAT_5015cca0,(float *)&DAT_5018bf0c,
                   (float *)((int)param_1 + 4),(float *)((int)param_1 + 4),iVar1,0,0x4002,0x14,0,0);
      *(float *)((int)param_1 + 0x2dc) = DAT_5015ccdc + 1.0;
    }
  }
LAB_500b175a:
  if (*(int *)((int)param_1 + 0x38c) == 0) {
    if ((*(uint *)((int)param_1 + 0x1a0) & 8) != 0) {
      *(uint *)((int)param_1 + 0x1a0) = *(uint *)((int)param_1 + 0x1a0) & 0xfffffff7;
      return;
    }
  }
  else {
    if ((((*(byte *)((int)param_1 + 0x388) & 8) != 0) && (-1 < *(char *)((int)param_1 + 0x1a0))) &&
       (*(float *)((int)param_1 + 0x2e0) < DAT_5015ccdc)) {
      *(float *)((int)param_1 + 0x2e0) = DAT_5015ccdc + 0.2;
      FUN_5008bb10(param_1,DAT_5015cca0,(float)DAT_5015cca0,(float *)&DAT_5018bf0c,
                   (float *)((int)param_1 + 4),(float *)((int)param_1 + 4),
                   *(int *)((int)param_1 + 0x38c) * 10,0,0x1002,0x1c,0,0);
    }
    if ((((*(byte *)((int)param_1 + 0x388) & 0x10) != 0) &&
        ((*(byte *)((int)param_1 + 0x1a0) & 0x40) == 0)) &&
       (*(float *)((int)param_1 + 0x2e0) < DAT_5015ccdc)) {
      *(float *)((int)param_1 + 0x2e0) = DAT_5015ccdc + 1.0;
      FUN_5008bb10(param_1,DAT_5015cca0,(float)DAT_5015cca0,(float *)&DAT_5018bf0c,
                   (float *)((int)param_1 + 4),(float *)((int)param_1 + 4),
                   *(int *)((int)param_1 + 0x38c) << 2,0,0x4002,0x15,0,0);
    }
    if ((*(uint *)((int)param_1 + 0x1a0) & 8) == 0) {
      *(undefined4 *)((int)param_1 + 0x2e0) = 0;
      *(uint *)((int)param_1 + 0x1a0) = *(uint *)((int)param_1 + 0x1a0) | 8;
    }
  }
  return;
}

