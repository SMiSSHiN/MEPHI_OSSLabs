Name:          b19-515-12
Version:       1.0
Release:       1%{?dist}
Summary:       Mishin Sergey's program
Group:         Testing
License:       GPL
URL:           https://github.com/smisshin/
Source0:       %{name}-%{version}.tar.gz
BuildRequires: /bin/rm, /bin/mkdir, /bin/cp
Requires:      /bin/bash, /usr/bin/date
BuildArch:     noarch

%description
A test package

%prep
%setup -q

%install
mkdir -p %{buildroot}%{_bindir}
install -m 755 b19-515-12 %{buildroot}%{_bindir}

%files
%{_bindir}/b19-515-12

%changelog
* Mon Jun 6 2022 Mishin
- Added %{_bindir}/b19-515-12
