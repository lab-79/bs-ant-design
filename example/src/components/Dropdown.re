open Antd;

let str = React.string;

let menu =
  <Menu>
    <Menu.Item>
      <a
        target="_blank"
        rel="noopener noreferrer"
        href="http://www.alipay.com/">
        {"1st menu item" |> str}
      </a>
    </Menu.Item>
    <Menu.Item>
      <a
        target="_blank"
        rel="noopener noreferrer"
        href="http://www.taobao.com/">
        {"2nd menu item" |> str}
      </a>
    </Menu.Item>
    <Menu.Item>
      <a
        target="_blank" rel="noopener noreferrer" href="http://www.tmall.com/">
        {"3rd menu item" |> str}
      </a>
    </Menu.Item>
  </Menu>;

[@react.component]
let make = () =>
  <Section name="Dropdown">
    <Alert _type=`error message={"DOES NOT WORK" |> str} />
    <Dropdown overlay=menu>
      <a className="ant-dropdown-link" href="#">
        {"Hover me" |> str}
        <IconUnsafe _type=IconName.down />
      </a>
    </Dropdown>
  </Section>;