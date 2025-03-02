object DM: TDM
  OldCreateOrder = False
  Height = 457
  Width = 583
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=jadva' +
      'l.mdb;Mode=Share Deny None;Persist Security Info=False;Jet OLEDB' +
      ':System database="";Jet OLEDB:Registry Path="";Jet OLEDB:Databas' +
      'e Password="";Jet OLEDB:Engine Type=5;Jet OLEDB:Database Locking' +
      ' Mode=1;Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global Bul' +
      'k Transactions=1;Jet OLEDB:New Database Password="";Jet OLEDB:Cr' +
      'eate System Database=False;Jet OLEDB:Encrypt Database=False;Jet ' +
      'OLEDB:Don'#39't Copy Locale on Compact=False;Jet OLEDB:Compact Witho' +
      'ut Replica Repair=False;Jet OLEDB:SFP=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 120
    Top = 88
  end
  object ATFak: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'poliklinika'
    Left = 280
    Top = 96
  end
  object DSFak: TDataSource
    DataSet = ATFak
    Left = 384
    Top = 96
  end
  object ATYo: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'p_id'
    MasterFields = 'id'
    MasterSource = DSFak
    TableName = 'bolim'
    Left = 280
    Top = 152
  end
  object DSYo: TDataSource
    DataSet = ATYo
    Left = 384
    Top = 152
  end
  object ATtalaba: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'b_id'
    MasterFields = 'id'
    MasterSource = DSYo
    TableName = 'bemor'
    Left = 280
    Top = 216
  end
  object DStalaba: TDataSource
    DataSet = ATtalaba
    Left = 384
    Top = 224
  end
  object ATlogin: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Login'
    Left = 280
    Top = 280
  end
  object DSlogin: TDataSource
    DataSet = ATlogin
    Left = 384
    Top = 288
  end
end
