object sign_up: Tsign_up
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  ClientHeight = 302
  ClientWidth = 375
  Color = clBtnFace
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clBlue
  Font.Height = -19
  Font.Name = 'Times New Roman'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 21
  object Label4: TLabel
    Left = 56
    Top = 53
    Width = 70
    Height = 21
    Caption = 'Familyasi'
  end
  object Label5: TLabel
    Left = 56
    Top = 99
    Width = 32
    Height = 21
    Caption = 'Ismi'
  end
  object Label7: TLabel
    Left = 56
    Top = 147
    Width = 43
    Height = 21
    Caption = 'Login'
  end
  object Label8: TLabel
    Left = 56
    Top = 195
    Width = 39
    Height = 21
    Caption = 'Parol'
  end
  object DBEdit4: TDBEdit
    Left = 168
    Top = 45
    Width = 145
    Height = 29
    DataField = 'Familiyasi'
    DataSource = DM.DSlogin
    TabOrder = 0
  end
  object DBEdit5: TDBEdit
    Left = 168
    Top = 91
    Width = 145
    Height = 29
    DataField = 'Ismi'
    DataSource = DM.DSlogin
    TabOrder = 1
  end
  object DBEdit7: TDBEdit
    Left = 168
    Top = 139
    Width = 145
    Height = 29
    DataField = 'login'
    DataSource = DM.DSlogin
    TabOrder = 2
  end
  object DBEdit8: TDBEdit
    Left = 168
    Top = 192
    Width = 145
    Height = 29
    DataField = 'parol'
    DataSource = DM.DSlogin
    TabOrder = 3
  end
  object BitBtn1: TBitBtn
    Left = 56
    Top = 248
    Width = 85
    Height = 25
    Kind = bkCancel
    NumGlyphs = 2
    TabOrder = 4
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 204
    Top = 248
    Width = 85
    Height = 25
    Kind = bkOK
    NumGlyphs = 2
    TabOrder = 5
    OnClick = BitBtn2Click
  end
end
