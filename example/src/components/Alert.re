let str = React.string;
[@react.component]
let make = () =>
  <Section name="Antd.Alert">
    <Antd.Alert message={"Success Text" |> str} _type=`success />
    <Antd.Alert message={"Info Text" |> str} _type=`info />
    <Antd.Alert message={"Warning Text" |> str} _type=`warning />
    <Antd.Alert message={"Error Text" |> str} _type=`error />
    <Antd.Alert message={"Closable" |> str} _type=`error closable=true />
    <Antd.Alert
      message={"Success Text" |> str}
      _type=`success
      description={"Description Hey Description Hey" |> str}
    />
    <Antd.Alert message={"Success Text" |> str} _type=`success showIcon=true />
    <Antd.Alert message={"Success Text" |> str} _type=`success banner=true />
    <Antd.Alert
      message={"Info Text" |> str}
      _type=`info
      closeText={"Close Now" |> str}
    />
  </Section>;