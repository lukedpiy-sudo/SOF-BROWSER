// rea decompile_all
// name: FUN_500290a0
// address: 0x500290a0
// body: available
// range: 0x500290a0-0x500291f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500290a0(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  float local_50;
  float local_4c;
  float local_48;
  undefined1 local_44 [64];
  undefined4 local_4;
  
  local_4 = 0;
  if (*(int *)(param_2 + 0x164) != 0) {
    local_50 = *(float *)(param_2 + 0x234) * -1.0;
    local_4c = *(float *)(param_2 + 0x238) * -1.0;
    local_48 = *(float *)(param_2 + 0x23c) * -1.0;
    FUN_500fe050(&local_50);
    *(float *)(param_2 + 4) = local_50 * 40.0 + *(float *)(param_1 + 4);
    *(float *)(param_2 + 8) = local_4c * 40.0 + *(float *)(param_1 + 8);
    *(float *)(param_2 + 0xc) = local_48 * 40.0 + *(float *)(param_1 + 0xc);
    param_2[0x24c] = '\0';
    param_2[0x24d] = '\0';
    param_2[0x24e] = '\0';
    param_2[0x24f] = '\0';
    param_2[0x250] = '\0';
    param_2[0x251] = '\0';
    param_2[0x252] = '\0';
    param_2[0x253] = '\0';
    param_2[0x254] = '\0';
    param_2[0x255] = '\0';
    param_2[0x256] = '\0';
    param_2[599] = '\0';
    (**(code **)(**(int **)(param_2 + 0x164) + 8))(local_44);
    FUN_500ecef0(&local_48,0,-1.5707964);
    FUN_500ecd70((int)&local_48);
    (**(code **)**(undefined4 **)(param_2 + 0x164))(&local_48);
    param_2[0x288] = '\0';
    param_2[0x289] = '\0';
    param_2[0x28a] = -0x80;
    param_2[0x28b] = '?';
    iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
    if (iVar2 != 0) {
      *(code **)(param_2 + 0x2b8) = FUN_500c3880;
      *(float *)(param_2 + 0x2b4) = DAT_5015ccdc + 30.0;
    }
    param_2[600] = '\0';
    param_2[0x259] = '\0';
    param_2[0x25a] = '\0';
    param_2[0x25b] = '\0';
    param_2[0x25c] = '\0';
    param_2[0x25d] = '\0';
    param_2[0x25e] = '\0';
    param_2[0x25f] = '\0';
    param_2[0x260] = '\0';
    param_2[0x261] = '\0';
    param_2[0x262] = '\0';
    param_2[0x263] = '\0';
    uVar1 = *(uint *)(param_2 + 0x1b8);
    param_2[0x160] = '\0';
    param_2[0x161] = '\0';
    param_2[0x162] = '\0';
    param_2[0x163] = '\0';
    *(uint *)(param_2 + 0x1b8) = uVar1 | 0x10000;
    FUN_500aa670(param_2);
    param_2[0x294] = '\0';
    param_2[0x295] = '\0';
    param_2[0x296] = '}';
    param_2[0x297] = 'C';
  }
  return;
}

