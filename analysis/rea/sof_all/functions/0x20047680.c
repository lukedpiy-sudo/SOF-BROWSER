// rea decompile_all
// name: FUN_20047680
// address: 0x20047680
// body: available
// range: 0x20047680-0x200478b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20047680(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  char *pcVar4;
  char *pcVar5;
  char *local_104;
  undefined1 local_100 [4];
  char local_fc [50];
  char local_ca [100];
  char local_66 [50];
  char local_34 [52];
  
  FUN_20047550(param_1,param_2,in_ECX + 0x68);
  FUN_20047470(param_1,param_2);
  FUN_20047550(param_1,param_2,local_fc);
  Com_sprintf(in_ECX + 0xcc,100,s_ghoul__s__s_ghl_20135014,in_ECX + 0x68,local_fc);
  FUN_20047470(param_1,param_2);
  FUN_20047550(param_1,param_2,in_ECX + 0x130);
  FUN_20047470(param_1,param_2);
  FUN_20047550(param_1,param_2,in_ECX + 0x194);
  FUN_20047470(param_1,param_2);
  FUN_20047550(param_1,param_2,in_ECX + 0x31c);
  FUN_20047470(param_1,param_2);
  FUN_20047550(param_1,param_2,in_ECX + 0x34e);
  FUN_20047470(param_1,param_2);
  FUN_20047550(param_1,param_2,in_ECX + 0x1f8);
  FUN_20047470(param_1,param_2);
  while( true ) {
    local_fc[0] = '\0';
    local_ca[0] = '\0';
    local_66[0] = '\0';
    cVar1 = FUN_20047550(param_1,param_2,local_fc);
    if ((cVar1 == '\0') || (local_fc[0] == '\0')) break;
    cVar1 = FUN_20047550(param_1,param_2,local_ca);
    if ((cVar1 == '\0') || (local_ca[0] == '\0')) break;
    cVar1 = FUN_20047550(param_1,param_2,local_66);
    if ((cVar1 == '\0') || (local_66[0] == '\0')) break;
    FUN_20047f40(local_fc,local_ca,local_66);
  }
  do {
    cVar1 = FUN_200478c0(param_1,param_2);
  } while (cVar1 != '\0');
  while( true ) {
    local_fc[0] = '\0';
    cVar1 = FUN_20047550(param_1,param_2,local_fc);
    if ((cVar1 == '\0') || (local_fc[0] == '\0')) break;
    cVar1 = FUN_20047550(param_1,param_2,local_34);
    if ((cVar1 == '\0') || (local_34[0] == '\0')) break;
    iVar2 = FUN_200f9e9e(local_34);
    local_ca[0] = iVar2 != 0;
    local_104 = operator_new(0x33);
    pcVar4 = local_fc;
    pcVar5 = local_104;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_104[0x32] = iVar2 != 0;
    FUN_2002ed20(local_100,*(undefined4 *)(in_ECX + 0x314),&local_104);
  }
  FUN_20047550(param_1,param_2,in_ECX + 0x22a);
  uVar3 = FUN_20047470(param_1,param_2);
  return uVar3 & 0xffffff00;
}

