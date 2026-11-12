// rea decompile_all
// name: FUN_5001da10
// address: 0x5001da10
// body: available
// range: 0x5001da10-0x5001db51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5001da10(void *this,undefined1 *param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  undefined3 extraout_var;
  int iVar4;
  
  if (param_1 != (undefined1 *)0x0) {
    if (param_2 == 7) {
      pcVar3 = (char *)((int)this + 0xb4);
      iVar4 = (int)param_1 - (int)pcVar3;
      do {
        cVar1 = *pcVar3;
        pcVar3[iVar4] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    }
    *param_1 = 0;
    bVar2 = FUN_500013a0();
    switch(CONCAT31(extraout_var,bVar2)) {
    case 1:
    case 0x1e:
    case 0x1f:
    case 0x20:
      param_2 = 0;
      *(undefined4 *)((int)this + 0x198) = 0;
      break;
    default:
      if (param_2 != 5) {
        param_2 = 1;
      }
      break;
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      if (param_2 != 5) {
        param_2 = 3;
      }
      break;
    case 4:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x17:
    case 0x18:
    case 0x19:
      if (param_2 != 5) {
        param_2 = 2;
      }
      break;
    case 0x14:
    case 0x16:
      if (param_2 != 5) {
        param_2 = 4;
      }
      break;
    case 0x15:
      param_2 = -(uint)(param_2 != 5) & 4;
      break;
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
      if (param_2 != 5) {
        param_2 = 6;
      }
    }
    switch(param_2) {
    case 1:
      pcVar3 = s_enemy_dth_skin_50133488;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x50133488)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 2:
      pcVar3 = s_enemy_dth_arab_50133478;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x50133478)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 3:
      pcVar3 = s_enemy_dth_russ_50133468;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x50133468)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 4:
      pcVar3 = &DAT_50133458;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x50133458)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 5:
      pcVar3 = s_enemy_dth_fem_50133498;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x50133498)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    case 6:
      pcVar3 = s_enemy_dth_rad_50133448;
      do {
        cVar1 = *pcVar3;
        (param_1 + -0x50133448)[(int)pcVar3] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
  }
  return;
}

