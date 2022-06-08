Name:       c-b19-515-12
Version:    1.0
Release:    1%{?dist}
Summary:    Mishin Sergey's programm
Group:      Testing
License:    GPL
URL:        https://github.com/smisshin/
Source:     %{name}-%{version}.tar.gz
BuildRequires: gcc

%description
A test package

%prep
%setup -q

%build
gcc -O2 -o c-b19-515-12 c-b19-515-12.c

%install
mkdir -p %{buildroot}%{_bindir}
cp c-b19-515-12 %{buildroot}%{_bindir}

%files
%{_bindir}/c-b19-515-12

%changelog
* Mon Jun 6 2022 Mishin
- Added %{_bindir}/c-b19-515-12
